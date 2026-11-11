
/* ==== __break @ 0044afff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044afff-0044afff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


