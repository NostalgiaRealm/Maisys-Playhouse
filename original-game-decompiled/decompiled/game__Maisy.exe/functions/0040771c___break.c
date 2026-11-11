
/* ==== __break @ 0040771c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040771c-0040771c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


