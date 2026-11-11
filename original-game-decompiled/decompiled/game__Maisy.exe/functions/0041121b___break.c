
/* ==== __break @ 0041121b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041121b-0041121b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


