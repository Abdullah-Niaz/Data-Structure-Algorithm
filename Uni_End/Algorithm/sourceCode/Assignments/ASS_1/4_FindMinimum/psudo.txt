FUNCTION findMinimum(N1, N2, N3)
    DECLARE minNumber

    IF N1 <= N2 THEN
        IF N1 <= N3 THEN
            minNumber := N1
        ELSE
            minNumber := N3
        END IF
    ELSE
        IF N2 <= N3 THEN
            minNumber := N2
        ELSE
            minNumber := N3
        END IF
    END IF

    RETURN minNumber
END FUNCTION

BEGIN
    DECLARE integer N1, N2, N3

    // Prompting user for input
    PRINT "Enter three numbers N1, N2, N3: "
    READ N1, N2, N3

    // Calling the function to find the minimum number
    minNumber := findMinimum(N1, N2, N3)

    // Printing the minimum number
    PRINT "Minimum number is: ", minNumber
END
