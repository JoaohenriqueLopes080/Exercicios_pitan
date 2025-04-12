/*Leia uma temperatura em graus Celsius e apresente-a
convertida em graus Fahrenheit.*/

int main() {
    int celsius;
    float fahrenheit;

    printf("Digite a Temperatura em Celsius: ");
    scanf("%d", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);
    /* (0 °C × 9/5) + 32 = 32 °F*/
}