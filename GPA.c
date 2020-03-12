#include <stdio.h>
float gpa(float m);
int main(){
    float mech,eng,cal,comp,lab,hpe;
    float GPA;
    float marks;
    char n[] = {10, 32, 32, 32, 61, 61, 61, 91, 32, 71, 80, 65, 45, 70, 105, 110, 100, 101, 114, 32, 93, 61, 61, 61, 10, 32, 32, 32, 32, 32, 32, 66, 121, 32, 58, 32, 78, 97, 115, 105, 114, 32, 65, 108, 105, 10, 10, 40, 62, 41, 32, 69, 110, 116, 101, 114, 32, 69, 97, 99, 104, 32, 83, 117, 98, 106, 101, 99, 116, 32, 77, 97, 114, 107, 115, 46, 10};
    printf(n);
    printf("\n(>)Mechanics Mark's : ");
    scanf("%f",&mech);
    printf("(>)English Mark's : ");
    scanf("%f",&eng);
    printf("(>)Calculus Mark's : ");
    scanf("%f",&cal);
    printf("(>)Computer Mark's : ");
    scanf("%f",&comp);
    printf("(>)Lab Mark's : ");
    scanf("%f",&lab);
    printf("(>)H.P.E Mark's : ");
    scanf("%f",&hpe);
    float G = 4*gpa(mech)+3*gpa(cal)+3*gpa(eng)+3*gpa(comp)+3*gpa(hpe)+1*gpa(lab);GPA = G/17.0;
    marks = mech+cal+eng+comp+hpe+lab;
    char result[100] = {10, 61, 61, 61, 61, 61, 61, 61, 61, 91, 82, 101, 115, 117, 108, 116, 93, 61, 61, 61, 61, 61, 61, 61, 61, 61, 10, 32, 32, 32, 77, 97, 114, 107, 115, 32, 58, 32, 37, 102, 10, 32, 32, 32, 71, 80, 65, 32, 58, 32, 37, 102, 10, 32, 32, 32, 80, 101, 114, 99, 101, 110, 116, 97, 103, 101, 32, 58, 32, 37, 102, 10, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 61, 10 };
    printf(result,marks,GPA,(marks/600)*100);
}
float gpa(float m){
    return ((m-50)*0.05)+2.0;
}
