# Operadores comparativos

Son usados para comparar valores. Y solo regresan un valor de verdadero o falso. De acuerdo a la expresión evaluada.
___

Todos los ejemplos usan las siguientes variables 

```cplusplus
// Enteros
	int n1 = 10;
	int n2 = 20;

	// Floats
	float f1 = 1.5;
	float f2 = 5.2;
```
___

## ">" Mayor a - Verdadero si el operando izquierdo es mayor al derecho, x > y.

```cplusplus
// 1. Mayor que
	cout << "(n1 > n2): " << (n1 > n2) << endl;
	cout << "(f1 > f2): " << (f1 > f2) << endl;
```

___

## "<" Menor a - Verdadero si el operando izquierdo es menor al de la derecha, x < y.

```cplusplus

// 2. Menor que
	cout << "(n1 < n2): " << (n1 < n2) << endl;
	cout << "(f1 < f2): " << (f1 < f2) << endl;
```
___

## "==" Igual a - Verdadero si ambos operandos son iguales, x==y.

```cplusplus
// 3. Igualdad
	cout << "(n1 == n2): " << (n1 == n2) << endl;
	cout << "(f1 == f2): " << (f1 == f2) << endl;
```

___

## "!=" Diferente a - Verdadero si ambos operadores son diferentes, x!= y.

```cpluplus
// 4. Desigualdad
	cout << "(n1 != n2): " << (n1 != n2) << endl;
	cout << "(f1 != f2): " << (f1 != f2) << endl;
```
___

## ">=" Mayor o igual - Verdadero si el operando izquierdo es mayor o igual al derecho, x >= y.

```cplusplus
// 5. Mayor o igual que
	cout << "(n1 >= n2): " << (n1 >= n2) << endl;
	cout << "(f1 >= f2): " << (f1 >= f2) << endl;
```	

___

## "<=" Menor o igual - Verdadero si el operando izquierdo es menor o igual al derecho, x <= y.

```cplusplus
// 6. Menor o igual que
	cout << "(n1 <= n2): " << (n1 <= n2) << endl;
	cout << "(f1 <= f2): " << (f1 <= f2) << endl;
```

___

## Ejemplos mixtos

```cplusplus
	// Enteros
	int n1 = 10;
	int n2 = 20;

	// Floats
	float f1 = 1.5;
	float f2 = 5.2;

	cout << boolalpha; // Imprime ture en lugar de 1

	// 7. Comparaciones de tipos mixtos
	cout << "(n1 > f2): " << (n1 > f2) << endl;
	cout << "(f1 < n2): " << (f1 < n2) << endl;

	// 8. Valores negativos
	cout << "(n1 > -n2): " << (n1 > -n2) << endl;
	cout << "(f1 < -f2): " << (f1 < -f2) << endl;

	// 9. Combinación de comparaciones
	// Puedes usar la palabra and en lugar de &&
	// Puedes usar la palabra or en lugar de ||
	cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) && (f1 > f2)) << endl;
	cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) || (f1 == 5.2)) << endl;

	// 10. Comparaciones anidadas
	cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
	cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;

	// 11. Comparacón con constantes
	cout << "(n1 == 10): " << (n1 == 10) << endl;
	cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;

	// 12. Compración con los resultados de las operaciones aritméticas
	cout << "((n1 + n2) < (f1 * f2)): " << ((n1 + n2) < (f1 * f2)) << endl;
	cout << "((n1 + n2) >= (f1 / f2)): " << ((n1 - n2) >= (f1 / f2)) << endl;

	// 13. Comparación de resultados negativos y positivos
	cout << "((-n1) < n2): " << ((-n1) < n2) << endl;
	cout << "((-f1) > f2): " << ((-f1) < f2) << endl;

	// 14. Combinación de aritméticas y compración
	cout << "((n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
	cout << "((n2 / n1) <= (f1 + f2)): " << ((n2 / n1) <= (f1 + f2)) << endl;

	// 15. Comparaciones encadenadas
	cout << "(n1 < n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
	cout << "(f2 > f1 and f1 > n1): " << (f2 > f1 and f1 > n1) << endl;

	//16. Compración de módulos
	cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl;

```
