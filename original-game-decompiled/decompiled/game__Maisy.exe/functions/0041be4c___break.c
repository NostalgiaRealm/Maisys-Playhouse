
/* ==== __break @ 0041be4c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041be4c-0041be4c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


