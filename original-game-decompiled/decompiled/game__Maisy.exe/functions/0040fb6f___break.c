
/* ==== __break @ 0040fb6f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040fb6f-0040fb6f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


