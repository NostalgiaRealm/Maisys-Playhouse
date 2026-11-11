
/* ==== __break @ 00436022 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00436022-00436022
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


