//for C++ 11
int mod = 1e9 + 7;

struct mint {
	int value = 0;

	constexpr mint() : value() {}

	mint(const long &x) {
		value = normalize(x);
	}

	static long normalize(const long &x) {
		long v = x % mod;
		if (v < 0) v += mod;
		return v;
	}

	bool operator==(const mint &x) { return value == x.value; };

	mint operator+(const mint &x) { return value + x.value; };

	mint operator-(const mint &x) { return value - x.value; };

	mint operator*(const mint &x) { return (long) value * x.value; };

	void operator+=(const mint &x) { value = normalize(value + x.value); };

	void operator-=(const mint &x) { value = normalize(value - x.value); };
};