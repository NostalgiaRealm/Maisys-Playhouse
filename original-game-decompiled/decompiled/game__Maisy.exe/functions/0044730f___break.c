
/* ==== __break @ 0044730f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044730f-0044730f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


