
/* ==== __break @ 0041390b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041390b-0041390b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


