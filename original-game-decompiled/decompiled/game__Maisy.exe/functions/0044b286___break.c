
/* ==== __break @ 0044b286 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044b286-0044b286
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


