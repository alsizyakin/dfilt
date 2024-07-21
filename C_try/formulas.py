a0 = 3
b0 = 0.01
c0 = 0.00020



V = np.linspace(0,20,21)
w0 = 9.81 * (a0 + b0 * V + c0 * V**2)
Mc = 99 # Carrier mass is Tonn
Nosc = 4
a0ss = 3
b0ss = 0.1
c0ss = 0.0025
#For carriage havier than 6 tonn
q0 = Mc/Nosc
w0ss = 9.81 * (0.7 + (a0ss + b0ss * V + c0ss * V**2 )/(q0)) 
print(q0)
print(w0ss[5])
P = 120
nc = 32
Q = Mc * nc
w0p = (w0 * P + w0ss * Q)/(P + Q) # for the whole train in traction mode
k = 1
womp = 9.81 * k * 28/(q0 + 7)
print(womp)
naklon = 22#promille
wi = 9.81 * naklon
print(wi)
R = 1000 #m
Skr = 0 #m
Ln = 600 #m
ks = 1
ky = 1
wro = 9.81 * (700*Skr) / (R * Ln) * ks * ky
print(wro)
wnt = 0
wv = 0
wvv = 0
wsp = 0
W = w0 * P + w0ss * Q + (P+Q) *(wi + wro + wnt + wv + wvv + wsp)
print(W[3])
Ft = 6 * 16000 * 75/19 * 2
print(Ft)
print(Ft - W[5])
etta = 0.7
N = 300 * 6
Fkm = 9.81 * (367*etta *N)/(V[5])
print(Fkm)