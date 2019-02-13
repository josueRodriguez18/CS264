%part 1.a
syms t;
syms f;
syms s;
f = 3*t*exp(-2*t);
laplace(f)
%1.b
f = 2*rectangularPulse(1,3,t);
laplace(f)
%1.c
f = 2*exp(-2*t)*cos(4*pi*t);
laplace(f)

%2.a
f = exp(-2*s)/((s+2)*(s+4));
ilaplace(f)
%2.b
f = (s^2+2*s+2)/(s+4);
ilaplace(f)
%3.a
f = (s+4)/(s^3+4*s^2+s);
[r,p,k] = residue((s+4),(s^3+4*s^2+s))
