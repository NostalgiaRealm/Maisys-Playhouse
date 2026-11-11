
/* ==== __break @ 0044b289 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044b289-0044b289
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


