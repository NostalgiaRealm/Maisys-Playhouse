
/* ==== __break @ 00449971 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00449971-00449971
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


