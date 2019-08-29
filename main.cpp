#include <cstdio>
#include <iostream>

int main(){
  int n, a[1000];

  while(scanf("%d", &n) == 1){
	for(int i = 0; i < n; ++i) 
	  std::cin >> a[i];

	int ans = 0;

	for(int i = 1; i < n; ++i)
	  for(int j = 0; j < i; ++j)
		if (a[i] < a[j])
		  ans++;

	std::cout << "Minimum exchange operations : " << ans << '\n';
  }

  return 0;
}
