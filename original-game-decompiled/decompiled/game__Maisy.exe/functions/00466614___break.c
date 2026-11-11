
/* ==== __break @ 00466614 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00466614-00466614
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


