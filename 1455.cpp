#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define sz(x) (int) x.size()
#define debug(x) cout << "DEBUG: " << x << endl;
#define eps 1e-6

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair< ll, ll > ii;
typedef vector <ll> vi;
typedef vector <ii> vii;

struct point{
	double x, y;
	point(){}
	point(double _x, double _y){
		x = _x, y = _y;
	}
	point subtract(point p){
		return point(x-p.x, y-p.y);
	}
	void read(){
		cin >> x >> y;
	}
	double distance(point p){
		return hypot(x-p.x, y-p.y);
	}
	double norm(){
		return x*x + y*y;
	}
	double cross(point p){
		return x*p.y - y*p.x;
	}
};

struct circle{
	double x, y, r;
	circle(){}
	circle(double _x, double _y, double _r){
		x = _x, y = _y, r = _r;
	}
	circle(point a, double b){
		x = a.x, y = a.y;
		r = b;
	}
	bool contains(point p){
		return point(x, y).distance(p) <= r + eps;
	}
	bool contains(vector<point> ps){
		for(auto p : ps)
		if(!contains(p))
		return 0;
		return 1;
	}
};
	
circle *makeCircumcircle(point a, point b, point c){
	double d = (a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y))*2;
	if(d == 0)
		return NULL;
	double x = (a.norm()*(b.y-c.y)+b.norm()*(c.y-a.y)+c.norm()*(a.y-b.y))/d;
	double y = (a.norm()*(c.x-b.x)+b.norm()*(a.x-c.x)+c.norm()*(b.x-a.x))/d;
	point p = point(x, y);
	return new circle(p, p.distance(a));
}

circle makeDiameter(point a, point b){
	return circle(point((a.x+b.x)/2, (a.y+b.y)/2), a.distance(b)/2);
}

circle makeCircleTwoPoints(vector<point> points, point p, point q){
	circle temp = makeDiameter(p, q);
	if(temp.contains(points))
	return temp;
	circle *left = NULL;
	circle *right = NULL;	
	for(point r : points){
		point pq = q.subtract(p);
		double cross = pq.cross(r.subtract(p));
		circle *c = makeCircumcircle(p, q, r);
		if(c == NULL)
		continue;
		else if(cross > 0 && (left == NULL || pq.cross(point(c->x, c->y).subtract(p)) > pq.cross(point(left->x, left->y).subtract(p))))
		left = c;
		else if (cross < 0 && (right == NULL || pq.cross(point(c->x, c->y).subtract(p)) < pq.cross(point(right->x, right->y).subtract(p))))
		right = c;
	}

	return right == NULL || left != NULL && left->r <= right->r ? *left : *right;
}

circle makeCircleOnePoint(vector<point> points, point p){
	circle c = circle(p, 0);
	for(int i = 0; i < points.size(); i++){
		point q = points[i];
		if(!c.contains(q)){
			if(c.r == 0)
			c = makeDiameter(p, q);
			else{
				vector<point> aux(&points[0], &points[i+1]);
				c = makeCircleTwoPoints(aux, p, q);
			}
		}
	}

	return c;
}

circle makeCircle(vector<point> points){
	vector<point> shuffled = points;
	random_shuffle(shuffled.begin(), shuffled.end());
	circle c;
	bool first = true;
	for(int i = 0; i < shuffled.size(); i++){
		point p = shuffled[i];
		if(first || !c.contains(p))	{
			vector<point> aux(&shuffled[0], &shuffled[i + 1]);
			c = makeCircleOnePoint(aux, p);
			first = false;
		}
	}
	return c;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	    
	int n, instancia = 1;
	cout << fixed << setprecision(2);

    while(true){
		cin >> n;

		if(!n)
			break;

		vector<point> p;
		point aux;

		while(n--){
			aux.read();
			p.push_back(aux);
		}

		circle c = makeCircle(p);
		cout << "Instancia " << instancia << '\n';
		cout << c.x << " " << c.y << " " << c.r << "\n\n";
		instancia++;
	}
    return 0;
}
