# %%
'''
Ejemplo para resolver el problema de lanzamiento de un proyectil
con una velocidad, un angulo de lanzamiento y una altura inicial dada.
'''
# %%
import math
import numpy as np
import matplotlib.pyplot as plt

GRAVEDAD = 9.81 # m/s^2
x_0 = 0.0 # m

y_0 = 1.0 # m
v_0 = 10.0 # m/s
angulo = 45.0 # grados
aangulo_rad = math.radians(angulo) # radianes

t_max = 10
N_points = 101

times_vector = np.linspace(0, t_max, N_points)

# %%

x_vector = x_0 + v_0 * math.cos(aangulo_rad) * times_vector
y_vector = y_0 + v_0 * math.sin(aangulo_rad) * times_vector - 0.5 * GRAVEDAD * times_vector*times_vector

# %%

fig = plt.figure()
plt.plot(x_vector, y_vector)
plt.xlabel('Distancia (m)')
plt.ylabel('Altura (m)')
plt.title('Lanzamiento de un proyectil')
plt.show
