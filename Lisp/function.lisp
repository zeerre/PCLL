(defun add(m n)
  (write (+ m n)))
(add 3 3)

; creating myset as an empty list
(defparameter *myset* ())
(adjoin 1 *myset*)
(adjoin 2 *myset*)
; adjoin did not change the original set
;so it remains same
(write *myset*)(terpri)
(setf *myset* (adjoin 1 *myset*))
(setf *myset* (adjoin 2 *myset*))
;now the original set is changed
(write *myset*)(terpri)
;adding an existing value
(pushnew 2 *myset*)
;no duplicate allowed
(write *myset*)(terpri)
;pushing a new value
(pushnew 3 *myset*)
(write *myset*)(terpri)
(adjoin 1 *myset*)
(adjoin 2 *myset*)
(write *myset*)
(terpri)
(setf *myset* (adjoin 1 *myset*))
(setf *myset* (adjoin 2 *myset*))
(pushnew 3 *myset*)
(write *myset*)(terpri)
