
/* ==== __break @ 00489fad ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489fad-00489fad
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


