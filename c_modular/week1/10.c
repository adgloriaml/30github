#include <stdio.h>
#include <math.h>

int calculate_ip_addresses(int subnet_mask) {
    return (int)pow(2, 32 - subnet_mask);
}

int main() {
    int subnet_mask = 24;
    int total_addresses = calculate_ip_addresses(subnet_mask);
    
    printf("Total IP addresses in the 192.168.100.1/24 range: %d\n", total_addresses);
    
    return 0;
}

