/*
 * File Name : BMI.c
 * ID : 104213080
 * Author : ���u��
 */


#include <stdio.h>

int main(){
    float x , y  ;                                // �ŧi�B�I�� x,y
    
    printf("�п�J�z������(cm) �魫(kg)\n");         // ����{����A�t����ܤ���r
    scanf("%f %f", &x , &y ) ;                    // ���y�ϥΪ̱N��J���B�I�� x , y�A�åBx,y�|�H�۩ҿ�J���Ʀr�ӧ���
    
    float n ;                                     // �ŧi�B�I�� n
    n = (10000*y) / (x*x) ;                       // BMI �p��覡 [ �魫 /�]����^2�^] �A���O�ҭn�D��J��������쬰�����A�ҥH n = y/[(x/100)*(x/100)]
    printf("%f" , n) ;                            // ��ܨt�ο�X���B�I�� n
    
    if (n < 18.5)                                 // �p�GBMI�Ȥp��18.5
    {
        printf("  �L��\n") ;                       // ��ܹL���]�åB����^
    }
    if (18.5 <= n && n < 24)                      // �p�GBMI�Ȥ���18.5�P24
    {
        printf("  �з�\n") ;                       // ��ܼзǡ]�åB����^
    
    }
    if (24 <= n)                                   // �p�GBMI�Ȥj��24
    {
        printf("  �L��\n") ;                        // ��ܹL���]�åB����^
    }
}
