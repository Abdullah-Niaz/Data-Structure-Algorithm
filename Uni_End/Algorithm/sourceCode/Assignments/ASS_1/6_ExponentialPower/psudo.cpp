FUNCTION exponentialPower(N, P)
    DECLARE result
    SET result to 1

    REPEAT P times
        SET result to result * N
    END REPEAT

    RETURN result
END FUNCTION
