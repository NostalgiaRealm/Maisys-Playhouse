
/* ==== __break @ 0041be4e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041be4e-0041be4e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


