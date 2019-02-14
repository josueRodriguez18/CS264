
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
num = [1 4];
den = [1 4 1 0];
h = tf(num, den)
[B, A] = residue( num, den )
%3.b
num = [1 2 2];
den = [1 4];
h = tf(num, den)
[C, B, A] = residue(num,den)
%3.c
num = [1 0];
den = [1 4 6 4];
h = tf(num, den)
[C, B] = residue(num, den)
f= s/((s+2)*(s^2+2*s+2))
ilaplace(f)
