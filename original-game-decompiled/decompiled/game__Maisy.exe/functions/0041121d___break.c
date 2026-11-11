
/* ==== __break @ 0041121d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041121d-0041121d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


