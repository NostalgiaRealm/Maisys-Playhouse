
/* ==== __break @ 0041076b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041076b-0041076b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


