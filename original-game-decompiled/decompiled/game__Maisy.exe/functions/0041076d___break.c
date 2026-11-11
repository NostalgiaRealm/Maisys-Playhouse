
/* ==== __break @ 0041076d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041076d-0041076d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


