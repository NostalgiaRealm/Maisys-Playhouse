
/* ==== __break @ 00413c4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00413c4f-00413c4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


