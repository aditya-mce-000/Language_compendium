import numpy as np

# NumPy gives Python a fast n-dimensional array (ndarray) and tools to work on whole arrays at once. Pandas, scikit-learn, and PyTorch are all built around the same ideas, so it's worth learning well.


# Creating arrays

a = np.array([1,2,3,4,5])
# print(a)

b = np.array([[1,2,3],[4,5,6]])
# print(b)

print(a.shape) # dimensions of array (5,)
print(b.shape)  # (2,3)
# print(a.size)
# print(b.size)
print(b.ndim)# number of dimensions or axis
print(b.dtype)#exact type of data stored inside the array

print(np.zeros((2,3)))
print(np.ones((2,2)))
print(np.arange(0,10,2))
print(np.linspace(0,1,5))
print(np.eye(3))

rng = np.random.default_rng(42)
print(rng.random((2,2)))
print(rng.integers(1,7, size = 5))

# Indexing and Slicing

print(a)
print(a[0])
print(a[-1])
print(a[1:4])
print(b)
print(b[1,2])
print(b[:, 0])
print(b[0, :])

print(a[a>2]) # boolean mask

# Vecorized operations

print(a * 3)
print(a ** 2)

print(a + a)
print(np.sqrt(a))

# broadcasting

# NumPy can combine arrays of different shapes by "stretching" the smaller one:
print(b + np.array([10,20,30]))

# Aggregations

print(a.sum())
print(a.mean())
print(a.std()) # standard deviation
print(a.max(),a.min())

print(b.sum(axis = 0))# axis 0 mean column wise
print(b.sum(axis = 1))# axis 1 mean row wise

# Reshaping and matrix math

m = np.arange(12).reshape(3,4)
m.T # # transpose -> shape (4, 3)
A = np.array([[1,2],[3,4]])
B = np.array([[5,6],[7,8]])
print(A @ B) # matrix multiplication
print(A * B) # element wise # not matris multiplication

print(np.linalg.inv(A)) # inverse
print(np.linalg.solve(A, [5,6]))