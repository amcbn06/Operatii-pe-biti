#pragma once
namespace bits {
	template<class T>
	struct bits {
		// Returns 2^k
		T pow2(int k) {
			return 1 << k;
		}
		// Returns the k-th bit of the number n
		T getbit(T n, int k) {
			return (n & (1ull << k)) >> k;
		}
		// Sets the k-th bit of the number n to 0 (resets it)
		T setbit0(T n, int k) {
			return n & ~(1ull << k);
		}
		// Sets the last k bits of the number n to 0 (resets them)
		T setlastbits0(T n, int k) {
			return (n >> 2ull) << 2ull;
		}
		// Sets the k-th bit of the number n to 1 (sets it)
		T setbit1(T n, int k) {
			return (n & (1ull << k)) >> k;
		}
		// Sets the last k bits of the number n to 1 (sets them)
		T setlastbits1(T n, int k) {
			return n & (1ull << k - 1ull);
		}
		void showbin(T n) {
			for (int i = 63; i >= 0; i--)
				cout << ((n & (1ull << i)) >> i);
			cout << nl;
		}
	};
}
