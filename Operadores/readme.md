```C++
// Enteros
	int n1 = 10;
	int n2 = 20;

	// Floats
	float f1 = 1.5;
	float f2 = 5.2;

	cout << boolalpha; // Imprime ture en lugar de 1

	// Operaciones con desigualdad, comparaciones, magnitud

	// 1. Igualdad
	cout << "(n1 == n2): " << (n1 == n2) << endl;
	cout << "(f1 == f2): " << (f1 == f2) << endl;

	// 2. Desigualdad
	cout << "(n1 != n2): " << (n1 != n2) << endl;
	cout << "(f1 != f2): " << (f1 != f2) << endl;

	// 3. Mayor que
	cout << "(n1 > n2): " << (n1 > n2) << endl;
	cout << "(f1 > f2): " << (f1 > f2) << endl;

	// 4. Menor que
	cout << "(n1 < n2): " << (n1 < n2) << endl;
	cout << "(f1 < f2): " << (f1 < f2) << endl;

	// 5. Mayor o igual que
	cout << "(n1 >= n2): " << (n1 >= n2) << endl;
	cout << "(f1 >= f2): " << (f1 >= f2) << endl;

	// 6. Menor o igual que
	cout << "(n1 <= n2): " << (n1 <= n2) << endl;
	cout << "(f1 <= f2): " << (f1 <= f2) << endl;

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
