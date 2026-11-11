
/* ==== __break @ 0040e2ed ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040e2ed-0040e2ed
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


