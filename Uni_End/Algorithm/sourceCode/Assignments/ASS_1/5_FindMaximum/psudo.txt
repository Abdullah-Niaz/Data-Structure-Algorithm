FUNCTION findMaximum(N1, N2, N3, N4)
    DECLARE maxNumber

    IF N1 >= N2 THEN
        IF N1 >= N3 THEN
            IF N1 >= N4 THEN
                maxNumber := N1
            ELSE
                maxNumber := N4
            END IF
        ELSE
            IF N3 >= N4 THEN
                maxNumber := N3
            ELSE
                maxNumber := N4
            END IF
        END IF
    ELSE
        IF N2 >= N3 THEN
            IF N2 >= N4 THEN
                maxNumber := N2
            ELSE
                maxNumber := N4
            END IF
        ELSE
            IF N3 >= N4 THEN
                maxNumber := N3
            ELSE
                maxNumber := N4
            END IF
        END IF
    END IF

    RETURN maxNumber
END FUNCTION

BEGIN
    DECLARE integer N1, N2, N3, N4

    // Prompting user for input
    PRINT "Enter four numbers N1, N2, N3, N4: "
    READ N1, N2, N3, N4

    // Calling the function to f
