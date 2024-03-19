PROCEDURE displayExponentialPower(N, P)
    DECLARE result
    SET result to 1

    REPEAT P times
        SET result to result * N
    END REPEAT

    DISPLAY N, " raised to the power ", P, " is: ", result
END PROCEDURE
