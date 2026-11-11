
/* ==== __break @ 0041076f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041076f-0041076f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


