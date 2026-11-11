
/* ==== __break @ 00451ec9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451ec9-00451ec9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


