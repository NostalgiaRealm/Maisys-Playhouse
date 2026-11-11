
/* ==== __break @ 0048fabf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048fabf-0048fabf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


