# R04_CS_share
自分のコードが良い物とは限らないのであくまでサンプルとして見てください。<br>
コピペ不可です。<br>

- 各ソートの計算量<br>
1. バブルソート<br>

    $$
    \displaystyle\frac{1}{2}(1+n-1)\cdot(n-1)=\frac{1}{2}n(n-1)
    $$

    $$
    \therefore \mathcal{O}(n^2)
    $$

 　2.クイックソート<br>
    　　 $n$個のランダムなデータに適応したときの平均比較回数を $C_n$ として<br>

  $$
  C_n=2(n+1)\sum_{k=1}^{n} \frac{1}{k+1}-\frac{2}{3}(n+1)
  $$
  
  $$
  \therefore C_n=2(n+1)H_n-\frac{8}{3}n-\frac{2}{3}
  $$
  
  $$
  \therefore H_n=\mathcal{O}(\log{n})　(\because H_n\leq1+\log{n})
  $$
