
/* ==== __break @ 00436fe9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436fe9-00436fe9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


