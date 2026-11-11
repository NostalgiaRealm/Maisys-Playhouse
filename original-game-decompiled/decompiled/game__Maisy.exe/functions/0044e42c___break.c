
/* ==== __break @ 0044e42c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e42c-0044e42c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


