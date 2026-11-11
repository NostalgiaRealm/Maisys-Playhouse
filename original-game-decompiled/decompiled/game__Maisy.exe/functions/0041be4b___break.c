
/* ==== __break @ 0041be4b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041be4b-0041be4b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


