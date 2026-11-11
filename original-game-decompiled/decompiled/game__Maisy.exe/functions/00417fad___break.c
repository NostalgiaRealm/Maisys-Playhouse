
/* ==== __break @ 00417fad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417fad-00417fad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


