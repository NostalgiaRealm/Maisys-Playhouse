
/* ==== __break @ 00410fdf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410fdf-00410fdf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


