
/* ==== __break @ 00436f4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436f4c-00436f4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


