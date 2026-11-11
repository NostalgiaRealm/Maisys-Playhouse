
/* ==== __break @ 00450d3f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450d3f-00450d3f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


