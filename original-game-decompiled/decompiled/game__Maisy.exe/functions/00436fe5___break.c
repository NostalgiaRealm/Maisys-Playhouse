
/* ==== __break @ 00436fe5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436fe5-00436fe5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


