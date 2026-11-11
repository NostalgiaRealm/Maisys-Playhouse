
/* ==== __break @ 004695ab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004695ab-004695ab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


