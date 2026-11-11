
/* ==== __break @ 0043ce3f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043ce3f-0043ce3f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


