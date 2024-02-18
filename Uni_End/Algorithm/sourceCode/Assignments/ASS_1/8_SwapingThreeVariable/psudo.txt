PROCEDURE swapThreeNumbers(A, B, C)
    // Swapping without using a fourth variable
    A := A + B + C
    B := A - (B + C)
    C := A - (B + C)
    A := A - (B + C)

    // Displaying the updated values
    DISPLAY "After swapping, A =", A, ", B =", B, ", and C =", C
END PROCEDURE
